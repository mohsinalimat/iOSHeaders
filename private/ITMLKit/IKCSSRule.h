//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKCSSDeclarationList, IKCSSMediaQuery, IKCSSSelectorList;

@interface IKCSSRule : NSObject
{
    IKCSSSelectorList *_selectorList;
    IKCSSDeclarationList *_declarationList;
}

@property(retain, nonatomic) IKCSSDeclarationList *declarationList; // @synthesize declarationList=_declarationList;
@property(retain, nonatomic) IKCSSSelectorList *selectorList; // @synthesize selectorList=_selectorList;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) IKCSSMediaQuery *mediaQuery;

@end

