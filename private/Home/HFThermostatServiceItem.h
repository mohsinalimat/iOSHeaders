//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFServiceItem.h>

@interface HFThermostatServiceItem : HFServiceItem
{
}

- (void)_getDescription:(out id *)arg1 controlDescription:(out id *)arg2 optionalDescriptions:(out id *)arg3 forResponse:(id)arg4 temperatureFormatter:(id)arg5;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)controlPanelItems;
- (id)createControlItemsWithValueSource:(id)arg1;

@end

