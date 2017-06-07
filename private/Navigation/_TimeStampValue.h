//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatTokenTimeStampValue-Protocol.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue>
{
    double _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
- (id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

