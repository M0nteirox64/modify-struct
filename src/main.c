#include <stdio.h>

typedef struct {
    char name[51];
    int age;
    float height;
} Person;

Person Person1 = {"Monteiro", 15, 1.79};

void change_data() {

    Person *ptr = &Person1;

    printf("[+] a modificar objeto 'Person1' do struct 'Person'.\n");

    printf("dados iniciais: \n");
    printf("Nome: %s\n" 
           "Idade: %d\n"
           "Altura: %f\n",
        Person1.name, Person1.age, Person1.height);
    
    printf("----------------------------\n");
    printf("dados finais: \n");

    sprintf(ptr->name, "Manuel");
    ptr->age = 19;
    ptr->height = 1.70;

    printf("Nome: %s\n"      
           "Idade: %d\n" 
           "Altura: %f\n", 
            Person1.name, Person1.age, Person1.height);
}

int main() {
    change_data();
}
