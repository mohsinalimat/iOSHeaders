//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FaceLandmarkDetectorPoint;

struct FaceList {
    struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> _field1;
};

struct __list_node_base<vision::DCN::boundingbox, void *> {
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field1;
    struct __list_node_base<vision::DCN::boundingbox, void *> *_field2;
};

struct __shared_weak_count;

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _mxnetTools_imageHeader_t_ {
    unsigned int flag;
    float label;
    struct _mxnetTools_imageID_t_ imageID;
};

struct _mxnetTools_imageID_t_ {
    unsigned long long ID[2];
};

struct _mxnetTools_recordHeader_t_ {
    unsigned int magic;
    unsigned int lrecord;
};

struct abstract_context;

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct blob<float, 3>;

struct blob<float, 4>;

struct blob<unsigned char __attribute__((ext_vector_type(4))), 2>;

struct fast_pyramid_resizer;

struct generic_load_constant_kernel;

struct list<vision::DCN::boundingbox, std::__1::allocator<vision::DCN::boundingbox>> {
    struct __list_node_base<vision::DCN::boundingbox, void *> _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<vision::DCN::boundingbox, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct net;

struct net_strides_configuration {
    int num_layer;
    struct vector<int, std::__1::allocator<int>> kernel_size;
    struct vector<int, std::__1::allocator<int>> stride;
    struct vector<int, std::__1::allocator<int>> pad;
};

struct pair<unsigned long long, unsigned long long> {
    unsigned long long first;
    unsigned long long second;
};

struct postprocessing_settings_t {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> name;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> network;
    int do_blend;
    float blend_alpha;
    int grayscale_i0;
    int grayscale_i1;
    float gamma;
    float saturation;
    int color_transfer_mode;
    int width;
    int height;
    int width_fast;
    int height_fast;
    int width_capture;
    int height_capture;
    int width_miniature;
    int height_miniature;
    float old_frame_scale;
};

struct shared_ptr<Espresso::abstract_context> {
    struct abstract_context *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
};

struct shared_ptr<Espresso::generic_load_constant_kernel> {
    struct generic_load_constant_kernel *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct vImage_Buffer {
    void *data;
    unsigned long long height;
    unsigned long long width;
    unsigned long long rowBytes;
};

struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>> {
    struct FaceLandmarkDetectorPoint *_field1;
    struct FaceLandmarkDetectorPoint *_field2;
    struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint>> {
        struct FaceLandmarkDetectorPoint *_field1;
    } _field3;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__first_;
    } __end_cap_;
};

struct vector<int, std::__1::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *__first_;
    } __end_cap_;
};

struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
    struct pair<unsigned long long, unsigned long long> *__begin_;
    struct pair<unsigned long long, unsigned long long> *__end_;
    struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long>*, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long>>> {
        struct pair<unsigned long long, unsigned long long> *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::blob<float, 3>>, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
    shared_ptr_dc6ac1b7 *__begin_;
    shared_ptr_dc6ac1b7 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3>>*, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3>>>> {
        shared_ptr_dc6ac1b7 *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
    shared_ptr_7fb9d9f9 *__begin_;
    shared_ptr_7fb9d9f9 *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>*, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>>> {
        shared_ptr_7fb9d9f9 *__first_;
    } __end_cap_;
};

struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
    shared_ptr_d082c67d *__begin_;
    shared_ptr_d082c67d *__end_;
    struct __compressed_pair<std::__1::shared_ptr<Espresso::net>*, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> {
        shared_ptr_d082c67d *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct shared_ptr<Espresso::abstract_context> {
    struct abstract_context *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_ae8b808b;

typedef struct shared_ptr<Espresso::blob<float, 3>> {
    struct blob<float, 3> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_dc6ac1b7;

typedef struct shared_ptr<Espresso::blob<float, 4>> {
    struct blob<float, 4> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_86ba3c2c;

typedef struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2>> {
    struct blob<unsigned char __attribute__((ext_vector_type(4))), 2> *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_5e9c0076;

typedef struct shared_ptr<Espresso::fast_pyramid_resizer> {
    struct fast_pyramid_resizer *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_7fb9d9f9;

typedef struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d082c67d;

typedef struct vector<FaceLandmarkDetectorPoint, std::__1::allocator<FaceLandmarkDetectorPoint>> {
    struct FaceLandmarkDetectorPoint *_field1;
    struct FaceLandmarkDetectorPoint *_field2;
    struct __compressed_pair<FaceLandmarkDetectorPoint *, std::__1::allocator<FaceLandmarkDetectorPoint>> {
        struct FaceLandmarkDetectorPoint *_field1;
    } _field3;
} vector_72a15614;

