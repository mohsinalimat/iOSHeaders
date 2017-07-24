//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class GEOLogMsgEvent, NSString;

@protocol MSPJournaling <NSObject>

@optional
- (GEOLogMsgEvent *)eventForState:(NSString *)arg1 affectedObject:(id)arg2;
- (int)telemetricKeyForState:(NSString *)arg1;
- (_Bool)shouldReportState:(NSString *)arg1;
- (_Bool)shouldLogState:(NSString *)arg1;
- (_Bool)shouldJournalState:(NSString *)arg1;
@end

