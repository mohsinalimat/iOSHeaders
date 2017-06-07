//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

#import <DAEAS/ASParsingNotifyOfUnknownTokens-Protocol.h>

@class NSDictionary, NSNumber;

@interface ASTopLevelErrorChecker : ASItem <ASParsingNotifyOfUnknownTokens>
{
    NSNumber *_foundStatus;
    NSDictionary *_parseRules;
}

+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSDictionary *parseRules; // @synthesize parseRules=_parseRules;
@property(retain, nonatomic) NSNumber *foundStatus; // @synthesize foundStatus=_foundStatus;
- (void).cxx_destruct;
- (void)unknownToken:(int)arg1 receivedForCodePage:(int)arg2;
- (id)asParseRules;
- (id)initWithCodePage:(int)arg1 statusToken:(int)arg2;

@end

