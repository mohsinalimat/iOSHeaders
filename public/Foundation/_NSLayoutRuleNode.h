//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSLayoutRule, _NSLayoutRuleNodeParent;

@interface _NSLayoutRuleNode : NSObject
{
    id <NSLayoutRule> _representedRule;
    id <_NSLayoutRuleNodeParent> _parentNode;
}

@property id <_NSLayoutRuleNodeParent> parentNode; // @synthesize parentNode=_parentNode;
@property(copy) id <NSLayoutRule> representedRule; // @synthesize representedRule=_representedRule;
- (id)description;
- (void)dealloc;
- (id)initWithRule:(id)arg1;

@end
