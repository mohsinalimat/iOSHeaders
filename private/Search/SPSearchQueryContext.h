//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPSearchQueryContext : NSObject
{
    _Bool _forceQueryEvenIfSame;
    NSString *_searchString;
    NSArray *_markedTextArray;
    NSString *_keyboardLanguage;
    NSString *_keyboardPrimaryLanguage;
    NSArray *_searchDomains;
    NSArray *_disabledDomains;
    NSArray *_disabledBundles;
    unsigned long long _whyQuery;
    unsigned long long _whyClear;
    unsigned long long _queryIdent;
}

+ (id)queryContextWithSearchString:(id)arg1;
@property(nonatomic) unsigned long long queryIdent; // @synthesize queryIdent=_queryIdent;
@property(nonatomic) unsigned long long whyClear; // @synthesize whyClear=_whyClear;
@property(nonatomic) unsigned long long whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) _Bool forceQueryEvenIfSame; // @synthesize forceQueryEvenIfSame=_forceQueryEvenIfSame;
@property(retain, nonatomic) NSArray *disabledBundles; // @synthesize disabledBundles=_disabledBundles;
@property(retain, nonatomic) NSArray *disabledDomains; // @synthesize disabledDomains=_disabledDomains;
@property(retain, nonatomic) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(retain, nonatomic) NSString *keyboardPrimaryLanguage; // @synthesize keyboardPrimaryLanguage=_keyboardPrimaryLanguage;
@property(retain, nonatomic) NSString *keyboardLanguage; // @synthesize keyboardLanguage=_keyboardLanguage;
@property(retain, nonatomic) NSArray *markedTextArray; // @synthesize markedTextArray=_markedTextArray;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasMarkedText;
- (id)initWithSearchString:(id)arg1;

@end

