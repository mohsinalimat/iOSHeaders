//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>
{
    struct _CFBurstTrie *_firstnames;
    struct _CFBurstTrie *_lastnames;
    NSString *_fullNameMapping;
    NSString *_firstNameMapping;
    NSString *_lastNameMapping;
    NSString *_possessiveMapping;
}

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
@property(retain) NSString *possessiveMapping; // @synthesize possessiveMapping=_possessiveMapping;
@property(retain) NSString *lastNameMapping; // @synthesize lastNameMapping=_lastNameMapping;
@property(retain) NSString *firstNameMapping; // @synthesize firstNameMapping=_firstNameMapping;
@property(retain) NSString *fullNameMapping; // @synthesize fullNameMapping=_fullNameMapping;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (void)dealloc;
- (id)initWithFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;

@end

