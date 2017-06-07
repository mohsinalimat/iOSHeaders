//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface MRProtobufSerialization : NSObject
{
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
    NSDictionary *_dictionaryKeyToProtobufKeyMapping;
    Class _protobufClass;
    CDUnknownBlockType _dictionaryValueToProtobufValueTransformer;
    CDUnknownBlockType _protobufValueToDictionaryValueTransformer;
}

@property(copy, nonatomic) CDUnknownBlockType protobufValueToDictionaryValueTransformer; // @synthesize protobufValueToDictionaryValueTransformer=_protobufValueToDictionaryValueTransformer;
@property(copy, nonatomic) CDUnknownBlockType dictionaryValueToProtobufValueTransformer; // @synthesize dictionaryValueToProtobufValueTransformer=_dictionaryValueToProtobufValueTransformer;
@property(retain, nonatomic) Class protobufClass; // @synthesize protobufClass=_protobufClass;
@property(copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping; // @synthesize dictionaryKeyToProtobufKeyMapping=_dictionaryKeyToProtobufKeyMapping;
- (void).cxx_destruct;
- (id)createProtobufFromDictionary:(id)arg1;
- (id)createDictionaryFromProtobuf:(id)arg1;

@end
