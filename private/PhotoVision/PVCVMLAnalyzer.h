//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, PVContext;
@protocol OS_dispatch_queue, PVCVMLIntegrating, PVPersistenceDelegate;

__attribute__((visibility("hidden")))
@interface PVCVMLAnalyzer : NSObject
{
    id <PVPersistenceDelegate> _persistenceDelegate;
    id <PVCVMLIntegrating> _cvmlIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSURL *_cacheDirUrl;
}

- (void).cxx_destruct;
- (id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1;
- (long long)_expressionTypeFromExpressionString:(id)arg1;
- (struct CGPoint)centroidForLandmarkRegion:(id)arg1;
- (struct CGRect)rectForLandmarkRegion:(id)arg1;
- (id)_newCVMLRequestOptions;
- (id)initWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 cvmlIntegration:(id)arg3 persistenceDelegate:(id)arg4;

@end

