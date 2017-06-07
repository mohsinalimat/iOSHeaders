//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, SGSuggestionsService;

@interface CNContactsEnvironment : NSObject
{
    NSURL *_baseURL;
    SGSuggestionsService *_suggestionsService;
}

+ (id)baseURLWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)arg1;
+ (id)unitTestingEnvironment;
+ (id)inMemoryURL;
+ (id)currentEnvironment;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) SGSuggestionsService *suggestionsService; // @synthesize suggestionsService=_suggestionsService;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool useInMemoryStores;

@end
