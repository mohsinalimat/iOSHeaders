//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGDetection : NSObject
{
    _Bool _hasPhoneLabel;
    unsigned int _type;
    NSString *_extraction;
    NSString *_context;
    NSString *_label;
    struct _NSRange _contextRangeOfInterest;
    struct _NSRange _match;
}

+ (id)detectionWithType:(unsigned int)arg1 text:(id)arg2 matchRange:(struct _NSRange)arg3 matchString:(id)arg4 label:(id)arg5 hasPhoneLabel:(_Bool)arg6;
@property(readonly, nonatomic) struct _NSRange match; // @synthesize match=_match;
@property(readonly, nonatomic) _Bool hasPhoneLabel; // @synthesize hasPhoneLabel=_hasPhoneLabel;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) struct _NSRange contextRangeOfInterest; // @synthesize contextRangeOfInterest=_contextRangeOfInterest;
@property(readonly, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *extraction; // @synthesize extraction=_extraction;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned int)arg1 extraction:(id)arg2 context:(id)arg3 contextRangeOfInterest:(struct _NSRange)arg4 label:(id)arg5 hasPhoneLabel:(_Bool)arg6 match:(struct _NSRange)arg7;

@end

