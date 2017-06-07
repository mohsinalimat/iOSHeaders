//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDataDetector, NSString;

@interface SGEntityMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDataDetector *_dataDetector;
    NSString *_phoneMapping;
    NSString *_emailMapping;
    NSString *_addressMapping;
    NSString *_linkMapping;
    NSString *_dateMapping;
}

+ (id)withPhoneMapping:(id)arg1 emailMapping:(id)arg2 linkMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;
@property(retain) NSString *dateMapping; // @synthesize dateMapping=_dateMapping;
@property(retain) NSString *linkMapping; // @synthesize linkMapping=_linkMapping;
@property(retain) NSString *addressMapping; // @synthesize addressMapping=_addressMapping;
@property(retain) NSString *emailMapping; // @synthesize emailMapping=_emailMapping;
@property(retain) NSString *phoneMapping; // @synthesize phoneMapping=_phoneMapping;
@property(retain) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithPhoneMapping:(id)arg1 emailMapping:(id)arg2 linkMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;

@end

