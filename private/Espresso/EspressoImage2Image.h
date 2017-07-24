//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLTexture, OS_dispatch_queue;

@interface EspressoImage2Image : NSObject
{
    void *ctx;
    void *plan;
    struct {
        void *plan;
        int network_index;
    } net;
    struct {
        void *data;
        void *reserved;
        unsigned long long dim[4];
        unsigned long long stride[4];
        unsigned long long width;
        unsigned long long height;
        unsigned long long channels;
        unsigned long long batch_number;
        unsigned long long sequence_length;
        unsigned long long stride_width;
        unsigned long long stride_height;
        unsigned long long stride_channels;
        unsigned long long stride_batch_number;
        unsigned long long stride_sequence_length;
        int storage_type;
    } output_blob;
    id <MTLCommandQueue> queue;
    id <MTLDevice> device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    _Bool is_temporal_model;
    unsigned long long dim[5];
    id <MTLTexture> smallOldResultTexture;
    id <MTLTexture> noiseTexture;
    id <MTLTexture> inputPlusNoiseTexture;
    struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float>>> tweaks;
    struct map<std::__1::basic_string<char>, postprocessing_settings_t, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, postprocessing_settings_t>>> postprocessing_settings;
    struct postprocessing_settings_t current_postprocessing_settings;
    int _rotation_degrees;
    int _flip_y;
}

@property(nonatomic) int flip_y; // @synthesize flip_y=_flip_y;
@property(nonatomic) int rotation_degrees; // @synthesize rotation_degrees=_rotation_degrees;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)postProcess:(id)arg1 cameraSourceTexture:(id)arg2 inputTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)simpleLinearResize:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (int)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 cropRect:(CDStruct_4c83c94d)arg4;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(CDStruct_4c83c94d)arg3;
- (void)tweak:(id)arg1 value:(float)arg2;
- (int)submitToQueueWithSourceTexture:(id)arg1 destinationTexture:(id)arg2;
- (int)reshapeToWidth:(int)arg1 andHeight:(int)arg2;
- (int)load:(id)arg1;
- (int)wasReshaped;
- (void)addNoiseLayer;
- (int)height;
- (int)width;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end

