//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/DOMStyleSheet.h>

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet
{
}

- (void)removeRule:(unsigned int)arg1;
- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
@property(readonly) DOMCSSRuleList *rules;
@property(readonly) DOMCSSRuleList *cssRules;
@property(readonly) DOMCSSRule *ownerRule;
- (unsigned int)insertRule:(id)arg1:(unsigned int)arg2;

@end

