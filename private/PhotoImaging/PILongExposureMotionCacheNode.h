//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUCacheNode.h>

@interface PILongExposureMotionCacheNode : NUCacheNode
{
}

- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)resolvedSourceNode:(out id *)arg1;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)persistentURL;
- (id)longExposureNode;
- (id)initWithLongExposureInput:(id)arg1;

@end

