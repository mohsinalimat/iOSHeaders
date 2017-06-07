//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct IOMappings {
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _field1;
    struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char>>>> _field2;
    struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int>>> _field3;
    struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int>>> _field4;
};

struct RKEventIdentifierRange {
    unsigned long long _field1;
    struct _NSRange _field2;
};

struct TokenSequence;

struct Tokenizer {
    void *_field1;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *_field1;
};

struct map<int, int, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, int>>> {
    struct __tree<std::__1::__value_type<int, int>, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, int>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<int, std::__1::basic_string<char>, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::basic_string<char>>>> {
    struct __tree<std::__1::__value_type<int, std::__1::basic_string<char>>, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char>>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::basic_string<char>>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::basic_string<char>>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::basic_string<char>>, std::__1::less<int>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, int>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, int>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence>> {
    struct TokenSequence *_field1;
    struct TokenSequence *_field2;
    struct __compressed_pair<RKNaturalLanguageEvents::TokenSequence *, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence>> {
        struct TokenSequence *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    float _field2;
} CDStruct_cd0cafa4;

// Template types
typedef struct vector<RKNaturalLanguageEvents::TokenSequence, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence>> {
    struct TokenSequence *_field1;
    struct TokenSequence *_field2;
    struct __compressed_pair<RKNaturalLanguageEvents::TokenSequence *, std::__1::allocator<RKNaturalLanguageEvents::TokenSequence>> {
        struct TokenSequence *_field1;
    } _field3;
} vector_ae35c5ca;

