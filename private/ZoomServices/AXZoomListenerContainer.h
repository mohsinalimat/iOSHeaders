//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AXZoomListenerContainer : NSObject
{
    CDUnknownBlockType handler;
    NSString *identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
- (void)dealloc;

@end

