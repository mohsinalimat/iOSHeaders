//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class NSArray, SKUIClientContext;
@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription
{
    SKUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
    id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)suggestedHandles;
- (void)selectedHandleAtIndex:(unsigned long long)arg1;
- (id)helpText;
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;

@end

