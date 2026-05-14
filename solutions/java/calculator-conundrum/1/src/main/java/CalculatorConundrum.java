class CalculatorConundrum {
    public String calculate(int operand1, int operand2, String operation) {
        String g = "";
        if (operand2==0) {
            throw new IllegalOperationException("Division by zero is not allowed", new ArithmeticException());
        }
        switch (operation) {
            case "+":
                g= Integer.toString(operand1+operand2);
                break;
            case "*":
                g=  Integer.toString(operand1*operand2);
                break;
            case "/":
                g = Integer.toString(operand1/operand2);
                break;
            case null:
                throw new IllegalArgumentException("Operation cannot be null");

            case "":
                throw new IllegalArgumentException("Operation cannot be empty");

            default:
                throw new IllegalOperationException("Operation '"+operation+"' does not exist");
        }
        String f = Integer.toString(operand1) + " "+operation+" "+Integer.toString(operand2)+" = "+g;
        return f;
    }
}
