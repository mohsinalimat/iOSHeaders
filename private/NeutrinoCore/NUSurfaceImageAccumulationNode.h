//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUImageAccumulationNode.h>

@protocol NUMutablePurgeableSurfaceImage;

@interface NUSurfaceImageAccumulationNode : NUImageAccumulationNode
{
}

@property(readonly, nonatomic) id <NUMutablePurgeableSurfaceImage> surfaceImage;
- (id)_newImage;

@end

