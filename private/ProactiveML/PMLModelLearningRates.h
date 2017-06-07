//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/DictionarySerializableProtocol-Protocol.h>

@class NSMutableData, NSString;

@interface PMLModelLearningRates : NSObject <DictionarySerializableProtocol>
{
    NSMutableData *_data;
    unsigned long long _length;
}

+ (id)modelLearningRatesFromDoubles:(id)arg1;
+ (id)fromDictionary:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)length;
- (double *)values;
- (id)initModelLearningRatesFromDoubles:(id)arg1;
- (id)toDictionary;
- (id)initFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

