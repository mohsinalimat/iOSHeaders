//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKRasterMapTileRequest;

__attribute__((visibility("hidden")))
@interface VKRasterMapTileServerCallback : NSObject
{
    VKRasterMapTileRequest *request;
    CDUnknownBlockType handler;
    double startTimestamp;
}

@property(nonatomic) double startTimestamp; // @synthesize startTimestamp;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler;
@property(retain, nonatomic) VKRasterMapTileRequest *request; // @synthesize request;
- (void)dealloc;
- (id)description;

@end

