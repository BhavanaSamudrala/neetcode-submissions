class Solution {
    public: int eval(int a, int b, string operand)
    {
       
        if (operand ==  "+"){
            return a + b;
        }
        if (operand ==  "-"){
            return a - b;
        }
            
        if (operand ==  "*"){
            return a*b;
        }
            
        if (operand ==  "/"){
            return a/b;
        }
        else{
            return a;
        }
                
    }
    

    public:
        int evalRPN(vector<string>& tokens) {

            if (tokens.size() == 1){
                return stoi( tokens[0]);
            }
            
            int total = 0;

            stack<int> mystack; 

            for (int i = 0; i < tokens.size(); i++){
                string token = tokens[i];
                if(token == "+" || token == "-" || token == "*" || token == "/"){
                    int b = mystack.top(); mystack.pop();
                    int a = mystack.top(); mystack.pop();
                    int ans = eval(a, b, token);
                    mystack.push(ans); 
                }
                else{
                    mystack.push(stoi(token));
                }
            }



            /*
            * I need to check if 2 numbers appear in a row I need to evaluate them with 
            * a succeding operator

            * If one number appear followed by an operator I need to evaluate it with the 
            * previous expression.
            */ 
            

            return mystack.top();
        }
};
