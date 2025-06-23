# Recursion 
When a function calls itself until a specific condition is met. 
This special condition is known as "Base Condition".

```
func(...args) {
    if (<condition>){
        return;
    }

    func(...<updated_args>);
}

main() {
    func();
}
```

## Recursion Tree
The virtual depiction of the functions calls is called Recursion Tree. 

```
Start of Recursion Tree --> f:1() -> f:2() -> f:3() -> f:4() -> f:5()
f:5() -> f:4() -> f:3() -> f:2() -> f:1() --> End of Recursion Tree
```

## Stack-space
The remaining non-executing/on-hold function are kept in Stack-space. 