//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject
{
    DACoreDAVLogger *_curLogger;
}

+ (id)instance;
@property(retain, nonatomic) DACoreDAVLogger *curLogger; // @synthesize curLogger=_curLogger;
- (void).cxx_destruct;
- (void)logData:(id)arg1;
- (void)logStringWithFormat:(id)arg1;
- (void)finishSnippets;
- (void)logString:(id)arg1;
- (_Bool)enabled;
- (id)init;

@end

