//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponent.h>

@class NSString, NSURL;

@interface SXEmbedVideoComponent : SXComponent
{
}

+ (id)typeString;
- (id)URLWithValue:(id)arg1 withType:(int)arg2;
- (Class)componentViewClass;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL; // @dynamic URL;
@property(readonly, nonatomic) NSString *accessibilityCaption; // @dynamic accessibilityCaption;
@property(readonly, nonatomic) double aspectRatio; // @dynamic aspectRatio;
@property(readonly, nonatomic) NSString *caption; // @dynamic caption;

@end

