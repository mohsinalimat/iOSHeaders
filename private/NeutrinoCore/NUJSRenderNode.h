//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSRenderNodeExport-Protocol.h>

@class NUJSImageGeometry, NUJSImageProperties, NUJSVideoProperties, NURenderNode;

@interface NUJSRenderNode : NUJSProxy <NUJSRenderNodeExport>
{
}

@property(readonly) NUJSVideoProperties *videoProperties;
@property(readonly) NUJSImageProperties *imageProperties;
@property(readonly) NUJSImageGeometry *geometry;
@property(readonly) NURenderNode *node;
- (id)initWithNode:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

