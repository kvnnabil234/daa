```mermaid
    flowchart TD;
    A(start) --> B[/int hari = 1/];
    B --> C[print contoh switch case statement];
    C --> D{case 1};
    D --true--> E[Print senin];
    D --false--> F{case 2};
    F --true--> G[Print selasa];
    F --false--> H{case 3};
    H --true--> I[Print rabu];
    H --false--> J{case 4};
    J --true--> K[Print kamis];
    J --false--> L{case 5};
    L --true--> M[Print jumat];
    L --false--> N{case 6};
    N --true--> O[Print sabtu];
    N --false--> P{case 7};
    P --true--> Q[Print minggu];
    P --false--> R((default));
    E & G & I & K & M & O & Q & R --> S(finish);
    
