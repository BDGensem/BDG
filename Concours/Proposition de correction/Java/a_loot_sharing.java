import java.util.*;

public class a_loot_sharing
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String B = sc.nextLine();
		String T = sc.nextLine();
		String P = sc.nextLine();

		if (Integer.parseInt(P) >= 2 * Integer.parseInt(B) + 3 * Integer.parseInt(T))
		{
			System.out.println("LOOT!");
		} else
			System.out.println("RHUM!");
		sc.close();
	}
}