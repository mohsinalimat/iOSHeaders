//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNSocialProfileURLParser : NSObject
{
}

+ (id)servicesDictionary;
+ (id)parseURLStringByInference:(id)arg1;
+ (void)enumerateMatchesWithRegexPattern:(id)arg1 inString:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (void)enumerateServiceMatchesForURLString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)parseURLStringWithRegularExpressions:(id)arg1;
+ (id)parseSocialProfileURL:(id)arg1;

@end

