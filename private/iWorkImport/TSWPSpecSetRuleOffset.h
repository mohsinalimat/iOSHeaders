//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPSpecRuleOffset.h>

@class TSWPRuleOffset;

__attribute__((visibility("hidden")))
@interface TSWPSpecSetRuleOffset : TSWPSpecRuleOffset
{
    TSWPRuleOffset *_ruleOffset;
    _Bool _unset;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (_Bool)isUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;

@end

