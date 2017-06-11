//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to http://stormhelp.saas.hp.../html/links.html", "snapshot=Action_1.inf");
	truclient_step("2", "For ( var j = 1 ; j < 9 ; j++ )", "snapshot=Action_2.inf");
	{
		truclient_step("2.1", "Click on Link 1 this is an examp... link", "snapshot=Action_2.1.inf");
		truclient_step("2.2", "Click on Back to Links page link", "snapshot=Action_2.2.inf");
	}

	return 0;
}
