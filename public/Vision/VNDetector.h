//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNObservationsCacheKeyProviding-Protocol.h>

@class VNMetalContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VNDetector : NSObject <VNObservationsCacheKeyProviding>
{
    VNMetalContext *_metalContext;
    unsigned long long _backingStore;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

+ (_Bool)bestImageWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 format:(unsigned int *)arg3;
+ (id)detectorName;
@property(readonly) unsigned long long backingStore; // @synthesize backingStore=_backingStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (void).cxx_destruct;
- (_Bool)initializeMetalContext:(id)arg1 error:(id *)arg2;
- (id)validatedImageBufferFromOptions:(id)arg1 error:(id *)arg2;
- (_Bool)validateImageBuffer:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)observationsCacheKey;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

