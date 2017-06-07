//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNContact, FMFHandle, FMFMapViewController, UIImage, UIView;
@protocol MKAnnotation;

@protocol FMFMapViewControllerDelegate <NSObject>

@optional
- (CNContact *)annotationContactForHandle:(FMFHandle *)arg1;
- (void *)annotationABRecordForHandle:(FMFHandle *)arg1;
- (UIView *)titleViewForSelectedHandle;
- (UIImage *)annotationImageForHandle:(FMFHandle *)arg1;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didReceiveLocation:(id <MKAnnotation>)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didDeselectHandle:(FMFHandle *)arg2;
- (void)fmfMapViewController:(FMFMapViewController *)arg1 didSelectHandle:(FMFHandle *)arg2;
- (_Bool)canSelectAnnotation:(id <MKAnnotation>)arg1;
@end

