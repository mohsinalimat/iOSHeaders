//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WBSOpenSearchDescription, WBSOpenSearchURLTemplate;
@protocol WBSQuickWebsiteSearchProviderDelegate;

@interface WBSQuickWebsiteSearchProvider : NSObject
{
    id <WBSQuickWebsiteSearchProviderDelegate> _delegate;
    NSString *_displayName;
    NSString *_hostname;
    NSString *_sourcePageURLString;
    NSDate *_dateAdded;
    WBSOpenSearchURLTemplate *_searchURLTemplateFromForm;
    NSString *_openSearchDescriptionURLString;
    NSDate *_dateOfLastSearch;
}

@property(copy, nonatomic) NSDate *dateOfLastSearch; // @synthesize dateOfLastSearch=_dateOfLastSearch;
@property(copy, nonatomic) NSString *openSearchDescriptionURLString; // @synthesize openSearchDescriptionURLString=_openSearchDescriptionURLString;
@property(retain, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplateFromForm; // @synthesize searchURLTemplateFromForm=_searchURLTemplateFromForm;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, nonatomic) NSString *sourcePageURLString; // @synthesize sourcePageURLString=_sourcePageURLString;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *hostname;
@property(readonly, nonatomic) NSString *displayName;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *urlTemplateForSuggestionsInJSON;
@property(readonly, nonatomic) WBSOpenSearchURLTemplate *searchURLTemplate;
@property(readonly, nonatomic) WBSOpenSearchDescription *openSearchDescription;
- (id)initWithSourcePageURLString:(id)arg1 openSearchDescriptionURLString:(id)arg2 delegate:(id)arg3;
- (id)initWithSourcePageURLString:(id)arg1 searchURLTemplateFromForm:(id)arg2 delegate:(id)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 delegate:(id)arg2;

@end

