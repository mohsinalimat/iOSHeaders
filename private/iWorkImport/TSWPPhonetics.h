//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSWPPhonetics : NSObject
{
    NSDictionary *_transcribers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDictionary;
+ (id)_singletonAlloc;
- (id)transcriberWithIdentifier:(id)arg1;
- (id)transcriberForBaseText:(id)arg1 range:(struct _NSRange)arg2 gettingLocale:(id *)arg3 inputLanguage:(id *)arg4;
- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

