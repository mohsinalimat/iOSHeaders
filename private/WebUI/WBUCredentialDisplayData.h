//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSCredentialMatch;

@interface WBUCredentialDisplayData : NSObject
{
    WBSCredentialMatch *_match;
    NSString *_detail;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) WBSCredentialMatch *match; // @synthesize match=_match;
- (void).cxx_destruct;
- (id)initWithMatch:(id)arg1 detail:(id)arg2 creationDate:(id)arg3;

@end

