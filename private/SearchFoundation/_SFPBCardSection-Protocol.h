//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBAbstractCommand, _SFPBCard, _SFPBCardSectionValue;

@protocol _SFPBCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasResultIdentifier;
@property(copy, nonatomic) NSString *resultIdentifier;
@property(readonly, nonatomic) _Bool hasCardSectionId;
@property(copy, nonatomic) NSString *cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths;
@property(copy, nonatomic) NSArray *commands;
@property(readonly, nonatomic) _Bool hasNextCard;
@property(retain, nonatomic) _SFPBCard *nextCard;
@property(readonly, nonatomic) _Bool hasValue;
@property(retain, nonatomic) _SFPBCardSectionValue *value;
@property(readonly, nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSString *)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (void)addParameterKeyPaths:(NSString *)arg1;
- (void)clearParameterKeyPaths;
- (_SFPBAbstractCommand *)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (void)addCommands:(_SFPBAbstractCommand *)arg1;
- (void)clearCommands;
@end

