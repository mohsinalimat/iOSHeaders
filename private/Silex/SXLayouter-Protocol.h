//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout, SXLayoutAttributes, SXLayoutBlueprint;
@protocol SXLayouterDelegate;

@protocol SXLayouter <NSObject>
@property(nonatomic) __weak id <SXLayouterDelegate> delegate;
- (void)layoutBlueprint:(SXLayoutBlueprint *)arg1 columnLayout:(SXColumnLayout *)arg2 layoutAttributes:(SXLayoutAttributes *)arg3 shouldContinue:(_Bool *)arg4;
@end
