//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class GQPProcessor;

@protocol GQPObjectReader <NSObject>
- (int)doneReading:(GQPProcessor *)arg1;
- (int)beginReadingFromReader:(struct _xmlTextReader *)arg1 processor:(GQPProcessor *)arg2;
@end

