//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IKCSSParser : NSObject
{
}

+ (id)consumeDeclaration:(id)arg1;
+ (id)consumeDeclarationList:(id)arg1;
+ (id)consumeFunction:(id)arg1 fromToken:(id)arg2;
+ (id)consumeSimpleBlock:(id)arg1 startTokenType:(long long)arg2;
+ (id)consumeComponentValue:(id)arg1;
+ (id)consumeAtRule:(id)arg1;
+ (id)consumeQualifiedRule:(id)arg1;
+ (id)consumeRules:(id)arg1 topLevel:(_Bool)arg2;
+ (id)parseStylesheet:(id)arg1;
+ (id)parseRulesList:(id)arg1;
+ (id)parse:(id)arg1;

@end

