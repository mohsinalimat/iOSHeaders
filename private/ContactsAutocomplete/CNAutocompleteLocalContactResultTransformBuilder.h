//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNAutocompleteResultFactory, NSMutableArray;

@interface CNAutocompleteLocalContactResultTransformBuilder : NSObject
{
    NSMutableArray *_transforms;
    CNAutocompleteResultFactory *_factory;
    unsigned long long _builtContactType;
}

+ (id)resultValueForContactPropertyValue:(id)arg1 propertyKey:(id)arg2 contact:(id)arg3;
+ (long long)addressTypeForProperty:(id)arg1;
+ (id)serverContactBuilderWithResultFactory:(id)arg1;
+ (id)suggestedContactBuilderWithResultFactory:(id)arg1;
+ (id)localContactBuilderWithResultFactory:(id)arg1;
@property unsigned long long builtContactType; // @synthesize builtContactType=_builtContactType;
- (void).cxx_destruct;
- (CDUnknownBlockType)buildAggregateTransform;
- (CDUnknownBlockType)build;
- (CDUnknownBlockType)makeTransformForProperty:(id)arg1;
- (void)addTransformForProperty:(id)arg1;
- (id)initWithResultFactory:(id)arg1;

@end

