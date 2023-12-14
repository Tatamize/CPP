#ifndef SERIALIZE_H
# define SERIALIZE_H

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
DataB* deserializeB(uintptr_t raw);
#endif