//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUCacheNode.h>

@interface NUVideoCacheNode : NUCacheNode
{
}

- (void)resolveSourceWithResponse:(struct NUResponse *)arg1;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 persistentURL:(id)arg2 error:(out id *)arg3;
- (_Bool)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (id)persistentURL;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;

@end

