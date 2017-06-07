//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, WBSOpenSearchURLTemplate, WBSURLSuffixChecker;

@interface WBSSearchProvider : NSObject <NSSecureCoding>
{
    WBSURLSuffixChecker *_suffixChecker;
    NSArray *_pathPrefixes;
    WBSOpenSearchURLTemplate *_searchURLTemplate;
    WBSOpenSearchURLTemplate *_safeSearchURLTemplate;
    NSDictionary *_safeSearchURLQueryParameters;
    NSArray *_hostSuffixes;
    _Bool _usesSearchTermsFromFragment;
    NSString *_queryKey;
    WBSOpenSearchURLTemplate *_suggestionsURLTemplate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate; // @synthesize suggestionsURLTemplate=_suggestionsURLTemplate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userVisibleQueryFromSearchURL:(id)arg1;
- (id)suggestionsURLForUserTypedString:(id)arg1;
- (id)searchURLForUserTypedString:(id)arg1;
- (_Bool)searchShouldUseSafeSearchTemplate;
- (id)safeSearchURLForSearchURL:(id)arg1;
- (_Bool)urlIsValidSearch:(id)arg1;
- (id)initWithSearchURLTemplate:(id)arg1 safeSearchURLTemplate:(id)arg2 safeSearchURLQueryParameters:(id)arg3 usesSearchTermsFromFragment:(_Bool)arg4 suggestionsURLTemplate:(id)arg5 hostSuffixes:(id)arg6 pathPrefixes:(id)arg7;

@end
