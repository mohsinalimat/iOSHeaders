//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HKEmergencyCardTableItem, UIView;

@protocol HKEmergencyCardRowHeightChangeDelegate
- (void)tableItemDidChangeSelection:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)tableItemDidBeginEditing:(HKEmergencyCardTableItem *)arg1 keepRectVisible:(struct CGRect)arg2 inView:(UIView *)arg3;
- (void)tableItem:(HKEmergencyCardTableItem *)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(UIView *)arg4;
@end

