//Operator Logika
boolean a,b,c;

System.out.println("\n=== OR (||) ===");
a = true;
b = true;
c = (a || b);
System.out.println(a + " || " + b + " = " + c);
a = true;
b = false;
c = (a || b);
System.out.println(a + " || " + b + " = " + c);
a = false;
b = true;
c = (a || b);
System.out.println(a + " || " + b + " = " + c);
a = false;
b = false;
c = (a || b);
System.out.println(a + " || " + b + " = " + c);

System.out.println("\n=== AND (&&) ===");
a = true;
b = true;
c = (a && b);
System.out.println(a + " && " + b + " = " + c);
a = true;
b = false;
c = (a && b);
System.out.println(a + " && " + b + " = " + c);
a = false;
b = true;
c = (a && b);
System.out.println(a + " && " + b + " = " + c);
a = false;
b = false;
c = (a && b);
System.out.println(a + " && " + b + " = " + c);

System.out.println("\n=== XOR (^) ===");
a = true;
b = true;
c = (a ^ b);
System.out.println(a + " ^ " + b + " = " + c);
a = true;
b = false;
c = (a ^ b);
System.out.println(a + " ^ " + b + " = " + c);
a = false;
b = true;
c = (a ^ b);
System.out.println(a + " ^ " + b + " = " + c);
a = false;
b = false;
c = (a ^ b);
System.out.println(a + " ^ " + b + " = " + c);

System.out.println("\n=== NOT (!) ===");
boolean b;
b = true;
System.out.println("! " + b + " = " + !b);

b = false;
System.out.println("! " + b + " = " + !b);