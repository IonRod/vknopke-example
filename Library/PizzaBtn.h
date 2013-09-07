//----------------------------------------------//

#import "PizzaBtnVersion.h"

//----------------------------------------------//

typedef NS_OPTIONS(NSUInteger, PizzaBtnInterfaceOrientationMask) {
    PizzaBtnInterfaceOrientationMaskPortrait = (1 << UIInterfaceOrientationPortrait),
    PizzaBtnInterfaceOrientationMaskkLandscapeLeft = (1 << UIInterfaceOrientationLandscapeLeft),
    PizzaBtnInterfaceOrientationMaskLandscapeRight = (1 << UIInterfaceOrientationLandscapeRight),
    PizzaBtnInterfaceOrientationMaskPortraitUpsideDown = (1 << UIInterfaceOrientationPortraitUpsideDown),
    PizzaBtnInterfaceOrientationMaskkLandscape = (PizzaBtnInterfaceOrientationMaskkLandscapeLeft | PizzaBtnInterfaceOrientationMaskLandscapeRight),
    PizzaBtnInterfaceOrientationMaskAll = (PizzaBtnInterfaceOrientationMaskPortrait | PizzaBtnInterfaceOrientationMaskkLandscapeLeft | PizzaBtnInterfaceOrientationMaskLandscapeRight | PizzaBtnInterfaceOrientationMaskPortraitUpsideDown),
    PizzaBtnInterfaceOrientationMaskkAllButUpsideDown = (PizzaBtnInterfaceOrientationMaskPortrait | PizzaBtnInterfaceOrientationMaskkLandscapeLeft | PizzaBtnInterfaceOrientationMaskLandscapeRight),
};

//----------------------------------------------//
#if (PIZZABTN_VERSION >= PIZZABTN_VERSION_1_1)
//----------------------------------------------//

@protocol PizzaBtnDelegate < NSObject >

@optional
- (void)pizzaBtnEvent:(NSString*)event args:(NSDictionary*)args;

@end

//----------------------------------------------//
#endif
//----------------------------------------------//

@interface PizzaBtn : NSObject

+ (NSUInteger)version;

+ (void)open;
+ (void)close;
+ (void)show;
+ (void)hide;
+ (void)setAvailableOrientations:(PizzaBtnInterfaceOrientationMask)orientations;
+ (void)setButtonWindowLevel:(UIWindowLevel)level;

#if (PIZZABTN_VERSION >= PIZZABTN_VERSION_1_1)

+ (void)setDelegate:(id< PizzaBtnDelegate >)delegate;
+ (id< PizzaBtnDelegate >)delegate;

#endif

@end

//----------------------------------------------//
