//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UpdateAndReportServices : NSObject
{
    _Bool _update;
    _Bool _report;
    CDUnknownBlockType _block;
}

@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) _Bool report; // @synthesize report=_report;
@property(readonly) _Bool update; // @synthesize update=_update;
- (void)dealloc;
- (id)initWithServices:(_Bool)arg1 needToReport:(_Bool)arg2 service:(CDUnknownBlockType)arg3;

@end

