//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, WBSFormAutoFillClassificationToCorrectionsTransformer, WBSFormMetadata;
@protocol WBSFormFieldClassificationCorrectorDelegate;

@interface WBSFormFieldClassificationCorrector : NSObject
{
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    id <WBSFormFieldClassificationCorrectorDelegate> _delegate;
    NSString *_domain;
    WBSFormMetadata *_formMetadata;
    NSDictionary *_formValues;
}

@property(readonly, copy, nonatomic) NSDictionary *formValues; // @synthesize formValues=_formValues;
@property(readonly, copy, nonatomic) WBSFormMetadata *formMetadata; // @synthesize formMetadata=_formMetadata;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <WBSFormFieldClassificationCorrectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_classificationCorrectionsForControlWithMetadata:(id)arg1 wasIdentifiedAsAddressBookField:(_Bool *)arg2;
- (void)processCorrections;
- (id)init;
- (id)initWithDomain:(id)arg1 formMetadata:(id)arg2 formValues:(id)arg3;

@end

