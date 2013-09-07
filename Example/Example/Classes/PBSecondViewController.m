#import "PBSecondViewController.h"
#import "PizzaBtn.h"

@interface PBSecondViewController ()

@end

@implementation PBSecondViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    // Change button orientations example
    [PizzaBtn setAvailableOrientations:PizzaBtnInterfaceOrientationMaskPortrait];
}

// For iOS < 6.0 rotations
- (BOOL) shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    if(UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
    {
        if(toInterfaceOrientation == UIInterfaceOrientationPortraitUpsideDown)
            return NO;
    }
    return YES;
}

@end
